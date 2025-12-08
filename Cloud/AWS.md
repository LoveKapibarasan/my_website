
**Type**

1. Compute Services

* EC2 (Elastic Compute Cloud): Virtual servers in the cloud
* Lambda: Serverless computing - run code without managing servers
* ECS/EKS: Container orchestration services
* Lightsail: Simplified virtual private servers

2. Storage Services

* S3 (Simple Storage Service): Object storage for any amount of data
* EBS (Elastic Block Store): Block-level storage for EC2 instances
* EFS (Elastic File System): Scalable file storage
* Glacier: Low-cost archival storage

3. Database Services

* RDS (Relational Database Service): Managed relational databases (MySQL, PostgreSQL, Oracle, SQL Server)
* DynamoDB: NoSQL database service
* Aurora: High-performance relational database
* Redshift: Data warehouse service

3. Networking & Content Delivery
* VPC (Virtual Private Cloud): Isolated cloud network
* CloudFront: Content delivery network (CDN)
* Route 53: DNS web service
* API Gateway: Create and manage APIs

4. Security & Identity

* IAM (Identity and Access Management): User access control
* KMS (Key Management Service): Encryption key management
* WAF (Web Application Firewall): Protect web applications
* Cognito: User authentication and authorization

### Firewall(Security Groups)

*  Firewall setting can be done outside of the container.


```
http://Public_IP:port # or custom domain
```

### Access from outside

1. Type: HTTP
2. Protocol: TCP
3. Port
4. Source: 0.0.0.0/0(allow access from over the world.)

### Check IP address from the container

```bash
curl ifconfig.me # IPV4
curl -4 ifconfig.me # IPV6
curl icanhazip.com
curl checkip.amazonaws.com
```


### VPC(Virtual Private Cloud)

* Virtual private network
* Isolate resources

**Subnet**
* マンションと部屋
* public or private
* Specific IP address


```
VPC: 172.31.0.0/16
  └─ Range: 172.31.0.0 ～ 172.31.255.255

Subnet example
172.31.0.0/24   → 172.31.0.0 ～ 172.31.0.255   (256)
172.31.1.0/24   → 172.31.1.0 ～ 172.31.1.255   (256)
172.31.2.0/24   → 172.31.2.0 ～ 172.31.2.255   (256)
```

CIDR(Classless Inter-Domain Routing)
* originated from A, B, C
e.g. 10.0.0.0/16: 
    * (10.0.0.0 ~ 10.0.255.255, 65536 bits)
    * The first 16 bits is network(fixed.), others are hosts.
    * host = 0, 1, 2, 3. 2^n -1(111.., broadcast) are reserved


### IGW(Internet Gateway)
* Set in root table

### Auto-assign public IP
* Turn on you want to access from outside of VPN = public



### Availability Zone (AZ)
* Data center location.
* 冗長化

### Billing and Cost Management


### 
* Root User
* IAM（Identity and Access Management）


### Notes

* Select the correct region
> EC2 does not open 25(e mail) by default.

