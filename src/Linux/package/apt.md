# apt

* Stands for Advanced Package Tool.

* A package management system used in Debian-based distributions (Debian / Ubuntu, etc.).

* Handles `.deb` packages.

* It’s more than just an installation command — it resolves dependencies and fetches software from repositories.

## How apt works (process)
1. Fetch repository information

    * Retrieves the package list database from URLs listed in `/etc/apt/sources.list` and `etc/apt/sources.list.d/`.

* `/usr/share/keyrings/` -- GPG keys are stored here.

2. Resolve dependencies

    * When the user runs apt install foo, apt checks what other libraries (dependencies) foo needs.

3. Download and verify packages

    * Downloads `.deb` files from the repository servers.

    * Verifies the files with GPG signatures to ensure they have not been tampered with.

4. Installation via `dpkg`

    * The actual installation process is handled by the dpkg tool.

5. Cache and state management

    * Downloaded .deb files are stored in `/var/cache/apt/archives/`.

    * Installed package information is recorded in `/var/lib/dpkg/status`.


## Other Distributions

* Red Hat / CentOS / Fedora : `.rpm` package
    * Manager → dnf, yum, rpm

* Arch: pkg.tar.zst、
    * Manager → pacman


### Lock

* `apt`, `dpkg` 


* `/var/lib/dpkg/lock`

* `/var/lib/apt/lists/lock`

* `/var/cache/apt/archives/lock`


## Commands

```bash
sudo apt install <package>
sudo apt update # update package list index
sudo apt upgrade # upgrade package
sudo apt autoremove 

sudo apt dist-upgrade
sudo do-release-upgrade # OS distribution will be updated 
apt search
apt list
apt list --installed
```