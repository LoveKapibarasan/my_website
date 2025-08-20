# RabbitMQ

sender -> RabbitMQ -> Receiever

```bash
npm install amqplib
sudo rabbitmq-server # foreground
sudo systemctl start rabbitmq-server

sudo systemctl enable rabbitmq-server # systemmd

```
## Producer.ts
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
## Consumer.ts
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

