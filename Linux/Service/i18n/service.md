
# {{"Linux Service File"}}


## {{General Rules}}

* {{"File extension"}}: `.service`

* {{"Location"}}: `/etc/systemd/system/` (local), `/usr/lib/systemd/system/` (system)


## {{"Syntax"}}

* {{"Format: [Section] followed by Key=Value"}}

### {{"Comment"}} 

* {{"lines start with # or ;"}}

### 1. [Unit] — {{"Metadata & dependencies"}}

* {{"Description"}}= — {{"One-line summary"}}

* {{"After"}}= — {{"Order of startup"}}

* {{"Requires"}}= — {{"Services that must be active"}}

### 2. [Service] — {{"How the service runs"}}

* `Type` 
    * `simple` - {{"default"}}

* `ExecStart`= — {{"Command to start"}}

* `ExecStop`= — {{"Command to stop"}}

* `ExecReload`= — {{"Command to reload"}}

* `Restart`= — {{"Restart policy"}}
    * `always` - 
    * `on-failure` if exit code is not `0`
    * `on-abnormal` when process is killed.
* `RestartSec`= — {{"Delay before restart"}}

* `User= / Group`= — {{"Run as specific user/group"}}
    * `root` - {{"default"}}
    * `group` - {{"root"}}

* `WorkingDirectory`= — {{"Directory for execution"}}

* `Environment`= — {{"Set environment variables"}}

### 3. [Install] - {{"How the unit should be enabled"}}

* `WantedBy=` {{"List of targets this unit should be started with. "}}
    * `multi-user.target` - {{"reached after the system is up and ready for logins"}}

## {{"Basic Commands"}}

* {{"Start"}} - `sudo systemctl start <service_name>`
* {{"creates symlinks according to your [Install] section"}} - `sudo systemctl enable <service_name>`

* {{"Stop"}} - {{"sudo systemctl stop <service_name>"}}
* {{"Disable"}} - `sudo systemctl disable <service_name>`

* {{"Realtime Log"}} - `journalctl -u <service_name> -f`

## {{"Notes"}}

* Service file is only writable by `root`.