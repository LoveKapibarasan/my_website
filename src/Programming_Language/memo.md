## General

```bash
-- version
-- v
q
quit
exit
```


# naming convention

* _name() -- just a naming convention meaning “internal use” — it does not enforce privacy.

* __name() -- triggers name mangling, making it harder (but not impossible) to access from outside

* x? = x is optional


## Documentation
* Java -- JavaDoc tool generates HTML docs.
/**
 * Description
 * @param name description of the parameter
 * @return description of the return value
 * @throws IOException description of the exception
 */
* JS. TS -- JSDoc Based on JavaDoc
/**
 * Returns a greeting
 * @param {string} name - The name
 * @returns {string} The greeting message
 */


## Special Comments
```
# TODO
/*TODO
*/
//TODO
```