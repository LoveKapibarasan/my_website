**pyproject.toml**
```toml
[build-system]
requires = ["setuptools>=61.0"]
build-backend = "setuptools.build_meta"

[project]
name = "my-package"
version = "0.1.0"
authors = [
  { name="Your Name", email="your.email@example.com" }
]
description = "A small example package"
readme = "README.md"
requires-python = ">=3.8"
classifiers = [
    "Programming Language :: Python :: 3",
    "License :: OSI Approved :: MIT License",
    "Operating System :: ArchLinux",
]

[project.urls]
Homepage = "https://github.com/username/my-package"
```

* Setuptools: tool to create python package
