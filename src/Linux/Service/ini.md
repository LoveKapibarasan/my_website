# INI Syntax Manual

## 1. Overview

The INI file format is a simple, human-readable configuration format consisting of **sections**, **keys**, and **values**. It is widely used for application settings(e.g. `.config`, `.service`), especially in Windows and Linux environments.

---

## 2. Basic Structure

An INI file is divided into **sections** marked by square brackets. Inside sections, key-value pairs are defined.

```ini
[section_name]
key=value
```

* **Section**: `[section_name]` defines a logical grouping.
* **Key**: The identifier on the left side of `=`.
* **Value**: The data assigned to the key.

---

## 3. Sections

* Sections are optional; if omitted, keys belong to a global/default section.
* Section names are **case-insensitive** in most parsers.
* Example:

```ini
[Database]
Host=localhost
Port=5432
User=admin
```

---

## 4. Keys and Values

* Keys are usually case-insensitive.
* Values can be strings, numbers, or booleans depending on the parser.
* Whitespace around `=` is ignored.
* Example:

```ini
username = johndoe
max_connections=100
enabled = true
```

---

## 5. Comments

* Comments are lines starting with `;` or `#`.
* Example:

```ini
# This is a comment
; Another comment
[General]
AppName=MyApp
```

---

## 6. Strings

* Strings are usually written directly.
* Quoting (e.g., `"value"`) may or may not be supported depending on the parser.
* Example:

```ini
Message=Hello World
Path="C:\\Program Files\\App"
```

---

## 7. Multi-line Values

Some parsers support multi-line values, often with line continuation (`\`) or indentation.

```ini
[Message]
text=This is a long text \
     that continues on the next line
```

---

## 8. Duplicate Keys

* Some parsers override previous keys.
* Others may keep all values in a list.
* Example:

```ini
[User]
role=admin
role=editor   ; may override or append depending on parser
```

---

## 9. Data Types

INI itself does not enforce types, but common conventions include:

* `true/false`, `yes/no`, `on/off` → booleans
* Integers (e.g., `42`)
* Floats (e.g., `3.14`)

---

## 10. Example Full INI File

```ini
; Application configuration
[General]
AppName=SampleApp
Version=1.2.3

[Database]
Host=127.0.0.1
Port=3306
User=root
Password=secret

[Features]
Logging=true
MaxRetries=5
```

---

