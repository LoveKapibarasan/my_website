
```
.git/
├── HEAD              # Reference to the current branch
├── config            # Repository configuration file
├── description       # Repository description
├── index             # Staging area information
├── hooks/            # Git hooks (scripts triggered by events)
├── info/             # Additional info like exclude files
│   └── exclude
├── objects/          # All content (commits, trees, blobs)
│   ├── pack/         # Packed objects for efficiency
│   └── info/
├── refs/             # References to branches and tags
│   ├── heads/        # Local branches
│   ├── remotes/      # Remote branches
│   └── tags/         # Tags
└── logs/             # Reference history logs
```
