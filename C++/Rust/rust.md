# Rust

```

src/
├─ main.rs          ← Entry（main）
├─ lib.rs           ← Library Definition
└─ module/
project.toml
```


* `.rs` file -> `.exe`(Windows) or ` `(Linux)

**Cargo**
    * Package mannager like pip, npm.

```bash
cargo new project_name
cd project_name

## !! For binary crate !!
cargo install "$crate-name"
# --force : reinstall
# No -y option

## !! For library crate !!
cargo add "$crate-name"

# Fix warnings
cargo fix
## --allow-dirty : Allow to destroy uncommit changes
cargo run
```

**Crate**
* [URL](https://crates.io/)
    1. Library Crate: A Package, Rust library.
    2. Binary Crate:  


**Project.toml**
```toml
[package]
name = "package_name"
version = "0.1.0"
edition = "2021" # Rust edition
authors = ["yourname <email@>"]
description = "description"
license = "MIT"
repository = "https://github.com/yourname/my_app"
[dependencies]
package = "x.y.z"
[dev-dependencies]
```



Memory safe


### Trait
* Interface or Abstract Class.
```rust
trait Greet {
    fn hello(&self);
}
```


### Modules
```
crate（＝project）
├── src/
│   ├── main.rs
│   ├── lib.rs
│   ├── math.rs
│   └── utils/
│       ├── mod.rs // utils::mod
```


### Test, Run a file

```bash
cargo test --test-threads=1  modules::submodule::test_function_name
# --test-threads=1 : run test in single thread. to prevent another test from running.
```

```rust
// src/math.rs
pub fn add(a: i32, b: i32) -> i32 {
    a + b
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_function_name() {
        assert_eq!(add(2, 3), 5);
    }
}
```

### Windows
```
error: Error calling dlltool 'dlltool.exe': program not found
error: could not compile `chrono` (lib)
```

1. MSVC(Visual Studio Code version)
```powershell
rustup default stable-x86_64-pc-windows-msvc
```

2. GNU version

* Install [MinGW](https://www.mingw.org/)
* Add MinGW(`C:\mingw64\bin`) to PATH
```powershell

where dlltool
```


### Redox OS
[RedoxOS](https://doc.redox-os.org)

### Notes
>  **Convert the identifier to snake case**

