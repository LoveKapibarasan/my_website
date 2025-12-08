

## Web Driver
* an object that connects code written in Python, Java, and other languages with browsers such as Chrome, Firefox, and Edge. = ein Objekt, das Code in Python, Java und anderen Sprachen mit Browsern wie Chrome, Firefox und Edge verbindet.

```python
from selenium import webdriver

driver = webdriver.Chrome()
driver = webdriver.Firefox()
```

**Option**
```python
from selenium import webdriver
from selenium.webdriver.chrome.options import Options

options = Options()
options.add_argument("--headless")          # Headless mode
options.add_argument("--window-size=1200,800")  # Windows Size
options.add_argument("--disable-gpu")       # for old environment

driver = webdriver.Chrome(options=options)
```
### Methods

**get**
```python
driver.get(url)
```
**find**
```python
find_element_by_id("id")
find_element_by_name("name")	
find_elements_by_css_selector("name")
```

    * **CSS Selector**
        * hierarchy
        * On which html element apply CSS?
        * Identify: `tags = driver.find_elements_by_css_selector("～")`

### Web Driver Wait

```python
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC

# n = second to wait
element = WebDriverWait(driver, n).until(
    EC.presence_of_element_located((By.ID, "username"))
)
```
* `until()` causes `TimeoutException`.

**Except Conditions**

EC.presence_of_element_located(locator) — The element exists in the DOM.
EC.visibility_of_element_located(locator) — The element is visible on the page.
EC.element_to_be_clickable(locator) — The element is clickable.
EC.text_to_be_present_in_element(locator, text) — The element contains the specified text.
EC.alert_is_present() — An alert is present.


**methods**
* `until()`
        * return WebElement
* `until_not()`

### Web Elements

```python
element.click()

element.send_keys("text")

element.clear()

print(element.text)
```
