
## Datatime



```rust
use chrono::Utc;
use chrono::Datelike;
use chrono::{Utc, Datelike};

fn main() {
    let now = Utc::now();
    // datalike trait
     println!(
        "Today is {:04}-{:02}-{:02}",
        now.year(),
        now.month(),
        now.day()
    );
}
```

**Datalike**

```rust
pub trait Datelike {
    fn year(&self) -> i32;
    fn month(&self) -> u32;
    fn day(&self) -> u32;
    fn weekday(&self) -> Weekday;
    ...
}
```