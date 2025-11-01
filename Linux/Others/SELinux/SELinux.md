
# SELinux (Security-Enhanced Linux) 
* a security feature built into the Linux kernel that provides Mandatory Access Control (MAC).

* It was originally developed by the U.S. National Security Agency (NSA) and later released as open source. Today, it is maintained by Red Hat and the open-source community.

### Key Features of SELinux

1. Mandatory Access Control (MAC)

    * Traditional Linux mainly relies on **Discretionary Access Control (DAC)**, where file owners decide permissions.

    * SELinux enforces system-wide security policies. Even the root user cannot bypass these policies.

2. Principle of Least Privilege

    * Each process or service is restricted to access only the resources it needs.


3. Policy-Based Control
    `getenforce`
    1. Permissive: only leave logs
    2. Enforcing
    3. Disabled

# AppArmor 

* Used by Ubuntu