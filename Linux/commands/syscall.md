
**Trace**
```bash
strace -e read -s "$byte_number" -o $log_path "$command"


# Check STDIN(Standard Input)
grep "read(0," "$log_file"   
```
