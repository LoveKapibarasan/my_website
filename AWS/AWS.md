
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

### Firewall

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
**Check opening port**
```bash
sudo ss -tlnp | grep LISTEN
sudo netstat -tlnp | grep LISTEN
```

### Notes

> EC2 does not open 25(e mail) by default.
