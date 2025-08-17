## Espanso(snap)
```bash
~/.config/espanso/match/match_custom.yml
```

```txt
~/.config/espanso/
├── config.yml        # Main settings
├── match             # Trigger → replacement definitions
│   ├── base.yml
│   └── my_custom.yml
└── scripts           # For dynamic/script expansions (optional)
```

```yaml
matches:
  - trigger: ":Hallo"
    replace: "Hello"
```

```bash
espanso service register
espanso start
espanso path # Path check
```

### Default

```txt
:date
```