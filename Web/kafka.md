## Kafka
* a high-speed data delivery system for streaming large amounts of data in real time.
```
Producer → Kafka → Consumer
```

* Data is redirected across multiple servers.

* Messages are stored on disks.

| Term               | Meaning                                                             |
| ------------------ | ------------------------------------------------------------------- |
| **Broker**         | A Kafka server; multiple brokers form a cluster                     |
| **Topic**          | A category or name for messages (like a postal address)             |
| **Partition**      | A subdivision of a topic for parallel processing and load balancing |
| **Producer**       | An application that sends messages                                  |
| **Consumer**       | An application that receives messages                               |
| **Consumer Group** | A group of consumers that share the load of reading messages        |

### Example

```bash
npm install kafkajs
```


#### Producer
```ts
// producer.ts
import { Kafka } from 'kafkajs';

// Create Kafka client
const kafka = new Kafka({
  clientId: 'example-producer',
  brokers: ['localhost:9092'], // Change to your Kafka broker address
});

// Create producer instance
const producer = kafka.producer();

async function runProducer() {
  await producer.connect();
  console.log('Producer connected');

  // Send a message
  await producer.send({
    topic: 'test-topic',
    messages: [
      { key: 'key1', value: 'Hello Kafka from TypeScript!' },
    ],
  });

  console.log('Message sent');
  await producer.disconnect();
}

runProducer().catch(console.error);
```

#### Consumer
```ts
// consumer.ts
import { Kafka, EachMessagePayload } from 'kafkajs';

// Create Kafka client
const kafka = new Kafka({
  clientId: 'example-consumer',
  brokers: ['localhost:9092'], // Change to your Kafka broker address
});

// Create consumer instance
const consumer = kafka.consumer({ groupId: 'test-group' });

async function runConsumer() {
  await consumer.connect();
  console.log('Consumer connected');

  // Subscribe to topic
  await consumer.subscribe({ topic: 'test-topic', fromBeginning: true });

  // Process messages
  await consumer.run({
    eachMessage: async ({ topic, partition, message }: EachMessagePayload) => {
      console.log({
        topic,
        partition,
        key: message.key?.toString(),
        value: message.value?.toString(),
        offset: message.offset,
      });
    },
  });
}

runConsumer().catch(console.error);
```