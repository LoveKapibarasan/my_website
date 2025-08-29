# Jupytor (Julia＋Python＋R → Ju-Py-R)

* Open source.

* Backend = Python, Frontend = JavaScript/TypeScript.

* Over 100 languages are supported through different kernels.

* IDE + Notebook

* `.ipynb` = JSON
```json
{
 "cells": [
  {
   "cell_type": "code",
   "source": ["print('Hello, world!')"],
   "outputs": [{"output_type": "stream", "text": "Hello, world!\n"}]
  }
 ],
 "metadata": {"kernelspec": {"name": "python3"}}
}

```

* Markdown, Latex support

```bash
pip install notebook
jupytor notebook
# Run menu
```

## Kernel

* A kernel is the computing engine that runs your code inside a notebook.

* The notebook itself is just an interface (cells, text, results).

* The kernel is what actually executes the code you type.

* Jupyter talks to the kernel using a messaging protocol (over `ZeroMQ` under the hood).