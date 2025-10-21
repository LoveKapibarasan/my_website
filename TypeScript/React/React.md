
**Component Based**
```jsx
function Hello() {
  return <h1>Hello、React!</h1>;
}
```

**Hooks**
* useState -- keeps data 
```jsx
import { useState } from 'react';

function Counter() {
  const [count, setCount] = useState(0);
```

* useEffect - side effect after rendering

**Event**
```jsx
<Button onClick={() => function()} 
```

**Props** 
- Pass data
- Only from parent to child


```jsx
</button>
      <UserProfile userId={userId} />
    </div>
```

```jsx
function UserProfile({ userId }) {
  const [user, setUser] = useState(null);
  const [loading, setLoading] = useState(true);

  // hooked with userId
  useEffect(() => {
    setLoading(true);
    
    fetch(`https://jsonplaceholder.typicode.com/users/${userId}`)
      .then(res => res.json())
      .then(data => {
        setU
```


* Import && Export

## Tools

```bash
npx create-react-app my-app
```
```html
<noscript>You need to enable JavaScript to run this app.</noscript>
<div id="root"></div> 
<script src="/config.js"></script> 
<script type="module" src="/src/index.tsx"></script>
```
* config.js -- setting file


React will be mounted with

```ts
// Old version
import ReactDOM from 'react-dom';
ReactDOM.render(<App />, document.getElementById('root'))

// Create root, new version

import { createRoot } from 'react-dom/client';

const root = createRoot(document.getElementById('root'));
root.render(<App />);
```
