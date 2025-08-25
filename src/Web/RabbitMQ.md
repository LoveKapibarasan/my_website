# RabbitMQ

* An open-source message broker that implements AMPQ(and other protocols).

* Docker, systemmd version exist.

### Configuration
1. **`/etc/rabbitmq/rabbitmq.conf`**
* Port number, user authentication, webUI

```ini
listners.tcp.default = 5672

management.tcp.port = 15672

# disable default user
loopback_users.guest = false
```

2. **`/etc/rabbitmq/rabbitmq-env.conf`**
* Server process, node name, log location.
* Environment variable that can be read when rabbitMQ starts.

```bash
NODENAME=rabbit@<hostname>
# Wait for all ip address (127.0.0.1 only for local host)
NODE_IP_ADDRESS=0.0.0.0 

```

## Create a user

```bash
sudo rabbitmqctl add_user <username> <password>
sudo rabbitmqctl set_user_tags <username> administrator 
rabbitmqctl add_vhost <vhost_name> # default /
rabbitmqctl list_vhosts
rabbitmqctl delete_vhost <vhost_name>
rabbitmqctl set_permissions -p <vhost_name> <username> ".*" ".*" ".*"
```

* vhost \sim venv in python

* **rabbitmq_management** -- web UI.(Typically on port 15672)

### Erlang

* a programming language.

* Lightweight processes in parallel.
* Distributed by design.

### AMPQ(Advanced Message Quering Protocol)

sender -> RabbitMQ -> Receiever

* 1. Broker
* 2. Exchange -- decide how to distribute message (by broker)
* 3. Queue -- place where message is temporaly stored,  producer sends to. 
* 4. Ack/Nack -- Success or fairule notification from consumer
  * Ack = success
  * Nack/Reject --> Broker resend
* 5. Durability \sim Persistency (can be transient or Time To Live)

**Message Structure**

* arbitrary structure(json, xml..)

Example: 
* `content-type`
* `content-encoding`
* `priority`
* `corelation-id`
* `reply-to`
* `expiration`
* `message-id`

* Connection is established using TCP
* Multi **channel** can be created on this.

## setup
```bash
npm install amqplib
sudo rabbitmq-server # foreground
sudo systemctl start rabbitmq-server
sudo systemctl enable rabbitmq-server # systemmd
```

## Node.js example

* Use ampqlib to connect from node.js.
* Ampqlib uses `Buffer`.(Temporal storage to store data)
  * Memo: buffer=cushion,  padding

**URL**
```txt
ampq://<username>:<password>@<hostname>:<port>/<vhost?>
```

### Producer.ts
```ts
import * as amqp from 'amqplib';

async function sendMessage() {
  const queue = 'task_queue';
  const message = 'Hello from RabbitMQ!';

  // 1) connect
  const connection = await amqp.connect('amqp://localhost');

  // 2) open channel
  const channel = await connection.createChannel();

  // 3) declare queue
  await channel.assertQueue(queue, { durable: false });

  // 4) publish message
  channel.sendToQueue(queue, Buffer.from(message));
  console.log(`Sent: "${message}"`);

  await channel.close();
  await connection.close();
}

sendMessage().catch(console.error);
```

### Consumer.ts
```ts
import * as amqp from 'amqplib';

async function startConsumer() {
  const queue = 'task_queue';

  const connection = await amqp.connect('amqp://localhost');
  const channel = await connection.createChannel();

  await channel.assertQueue(queue, { durable: false });

  console.log(`Waiting for messages in ${queue}. To exit press CTRL+C`);

  channel.consume(
    queue,
    (message) => {
      if (message) {
        console.log(`Received: ${message.content.toString()}`);
        // Acknowledge the message as processed
        channel.ack(message);
      }
    },
    { noAck: false }
  );
}

startConsumer().catch(console.error);


```

