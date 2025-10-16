# LLM(Large Language Model)

* RAM size is important.
* B, K = Parameter Size.

7B
* GPU: RTX 3060 (12GB VRAM) 
* RAM: 16GB
* Storage: 10-20GB

13B-30B

* GPU: RTX 4090 (24GB VRAM)
* RAM: 32GB
* Storage: 20-50GB

### Quantization (量子化)
* Quantization is a technique to compress LLMs by reducing the precision of the numbers used to store model parameters. This makes models smaller and faster, allowing them to run on less powerful hardware.
* Standard models use 32-bit or 16-bit floating-point numbers to store each parameter. Quantization converts these to lower precision formats:

**8-bit (INT8):** ~50% size reduction

# Ollama
* Closs platform install tool.

**Open Source**

### Llama

* Llama 3.1 (8B) -- 2025

* by Meta

**Config:**`/usr/share/ollama/.ollama`

```bash
ollama list
ollama run  "$model_name"
ollama run "$model_name" "one_shot_commend"
ollama run "$model_name" < "$input"
ollama show "$model_name"
ollama rm "$model_name" 
```
In the prompt,
```
>>> /set system "You are assistant AI."
>>> /clear  # clear context
>>> /save "name" # Saved on ~/.ollama/
>>> /bye  # exit
>>> """
>>> multi
>>> line
>>> """
>>> Ctrl + d # exit
```

By default, ollama does not store talk history.
