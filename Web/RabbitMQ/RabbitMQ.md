# RabbitMQ

* An open-source message broker that implements AMPQ(and other protocols).

* 1. Docker, 2. systemmd version exist.

### Configuration
1. **`/etc/rabbitmq/rabbitmq.conf`**
* Port number, user authentication, webUI

```ini
listners.tcp.default = 5672

management.tcp.port = 15672
# http://localhost:15672
# disable default user
loopback_users.guest = false
```

2. **`/etc/rabbitmq/rabbitmq-env.conf`**
* Server process, node name, log location.
* Environment variable that can be read when rabbitMQ starts.

```bash
NODENAME=rabbit@hostname
# Wait for all ip address (127.0.0.1 only for local host)
NODE_IP_ADDRESS=0.0.0.0 
```

* Logs: /var/log/rabbitmq/

> **No systemmd log file**


## Create a user
```bash
sudo rabbitmqctl add_user "$username" "$password"
sudo rabbitmqctl change_password "$username"
sudo rabbitmqctl set_user_tags "$username" administrator 
rabbitmqctl add_vhost "$vhost_name" # default /
rabbitmqctl list_vhosts
rabbitmqctl delete_vhost "$vhost_name"
# configure, read ,write
rabbitmqctl set_permissions -p "$vhost_name" "$username" ".*" ".*" ".*"
```
* 

* vhost \sim venv in python

### WebUI
* **rabbitmq_management**
* Typically on port 15672

1. Overview
```
- Connections: 2（Application）
- Channels: 3（connection channel）
- Queues: 5（the number of queue）
- Memory used: 45 MB
- Disk space: 1.2 GB
```
2. Queue^and Streams
```
(virtual_host)Name | Ready | Unacked | Total
─────────────────────────────────────────
order_emails      |  124  |   12    |  136
image_processing  |    8  |    3    |   11
invoice_queue     |   42  |    0    |   42
```
* Ready: waiting for next process
* Unacked: Proceeding

4. Admin
* User management

5. Connections
* Connecting applications
```
Name                | User  | Vhost | Channels | Memory
────────────────────────────────────────────────────────
127.0.0.1:54321     | guest | /     |    3     | 2.1 MB
127.0.0.1:54322     | guest | /     |    1     | 1.8 MB
```

6. Exchange
* Message routing

7. Channels
* Connections between consumers and producer
```
Connection（1 unit）
├── Channel 1
├── Channel 2
└── Channel 3
```
> Port 37xxx: Temporal port.

**frame**

frame is the lowest-level unit of communication that flows over a connection between a client and the broker.

### Erlang

* a programming language.

* Lightweight processes in parallel.
* Distributed by design.

### AMPQ(Advanced Message Quering Protocol)

`Sender(Consumer) -> RabbitMQ(Broker) -> Receiever(Producer)`

* 1. **Broker**
* 2. **Exchange** -- decide how to distribute message (by broker)
* 3. **Queue** -- 
    * place where message is temporaly stored,  producer sends to. 
    * RabbitMQ can reply to user immediately while processing message.
* 4. Ack/Nack -- Success or fairule notification from consumer
  * Ack = success(Acknowledgement)
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

### Logs
```bash
sudo tail -n 50 /var/log/rabbitmq/rabbit@$(hostname).log
```


