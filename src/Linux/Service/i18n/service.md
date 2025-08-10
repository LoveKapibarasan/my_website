
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
    * `simple` - Default

* `ExecStart`= — {{"Command to start"}}

* `ExecStop`= — {{"Command to stop"}}

* `ExecReload`= — {{"Command to reload"}}

* `Restart`= — {{"Restart policy"}}
    * `always` - 
    * 
* `RestartSec`= — {{"Delay before restart"}}

* `User= / Group`= — {{"Run as specific user/group"}}

* `WorkingDirectory`= — {{"Directory for execution"}}

* `Environment`= — {{"Set environment variables"}}

## {{"Notes"}}

* Service file is only writable by `root`.