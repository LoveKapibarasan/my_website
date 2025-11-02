# PyQt

* originated from QT in C.
* Version: 1,2,3,4,5,6(~)

**Class**
    * `self`
    * `__init()__` constructor

```python
from PyQt6.QtWidgets import QApplication, QMainWindow, QPushButton
import sys

class MainWindow(QMainWindow):
    def __init__(self):
        # Do not forget super() 
        super().__init__()
        self.setWindowTitle("My App")
        # # setGeometry(x, y, width, height)
        self.setGeometry(100, 100, 400, 300)
        
        # Create an element and connect function
        button = QPushButton("Click Me", self)
        # can call non self function
        button.clicked.connect(self.on_click)

    def on_click(self):
        print("Button clicked!")

app = QApplication(sys.argv)
window = MainWindow()
window.show()
sys.exit(app.exec()) # PyQt6 Syntax
```


**Coardinates**
```python
# (0, 0) Left top

┌─────────────────────> x
│ (0,0)
│   ┌────────┐
│   │ Widget │ (10, 20, 300, 200)
│   │        │
│   └────────┘
│
v y
```


**Sub Window**
```python
class SubWindow(QMainWindow):
        super().__init__()
        self.setWindowTitle(title)
        self.setGeometry(200, 200, 300, 200)

        label = QLabel(f"{title}
        ")
        self.setCentralWidget(label)

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Main Window")
        self.setGeometry(100, 100, 400, 300)

        # Store sub windows
        self.sub_windows = []

        # UI setting
        self.setup_ui()

    def setup_ui(self):
        central_widget = QWidget()
        layout = QVBoxLayout()


        btn2 = QPushButton("Open Sub window 2")
        btn2.clicked.connect(lambda: self.open_sub_window("SubWindow2"))

        layout.addWidget(btn1)
        layout.addWidget(btn2)

        central_widget.setLayout(layout)
        self.setCentralWidget(central_widget)

    def open_sub_window(self, title):
        sub = SubWindow(title)
        sub.show()
        self.sub_windows.append(sub)  # 参照を保持
