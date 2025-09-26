# Cat

**Here Document**

* `cat [OPTIONS] [FILE]` -- reads files and writes their contents to standard output
    * cat > file -- Create a file
    * cat content > file # Overwrite
    * cat content >> file -- Append
    *   ```bash
        cat > filename << 'EOF'
            line 1
            line 2
            line 3
        EOF
        # ===
        sudo tee filename <<'EOF'
            line 1… # Literal
        EOF

        sudo tee filename <<EOF
            $line 1… # can use variable expansion
        EOF
        ```