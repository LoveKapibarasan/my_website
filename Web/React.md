# React


**useState**

* render again

```tsx
import { useState } from "react";

  const [xxx, setXxx] = useState("");

 // ...
       <input type="text" onChange={(e) => setXxx(e.target.value)} />
```


**useEffect**

```tsx
useEffect(() => {
  // process
}, [/* dependent array */]);
```


**routing**

```bash
npm install react-router
```

```tsx
import { StrictMode } from "react";
import { createRoot } from "react-dom/client";
import "./index.css";
import { createBrowserRouter, RouterProvider } from "react-router";
import Header from "./Header.tsx";
import MovieDetail from "./path.tsx";
import App from "./App";

const router = createBrowserRouter([
  { path: "/", Component: App },
  { path: "/path/:id", Component: MovieDetail },
]);

createRoot(document.getElementById("root")!).render(
  <StrictMode>
  <Header>
    <RouterProvider router={router} />
    
    </Header>
  </StrictMode>
);
```

**id**
```tsx
// destructuring assignment
const { var } = useParams();
```

**strict mode**
* Activates extra checks and warnings for its descendant components.

​* Highlights unexpected side effects and ensures components are prepared for future changes in React.

* Identifies unsafe lifecycle methods and deprecated API usage.

* Forces components to re-render and re-run certain operations (like effects and refs) more than once to uncover hidden bugs.

```tsx
import { StrictMode } from "react";
import { createRoot } from "react-dom/client";
const root = createRoot(document.getElementById("root"));

root.render(
  <StrictMode>
    <App />
  </StrictMode>
);
```

**i18n**


* a React component from the react-intl library that wraps your app to provide internationalization (i18n) context

```tsx
import { IntlProvider } from "react-intl";
import messages_en from "./locales/en.json";
import messages_fr from "./locales/fr.json";

const messages = {
  en: messages_en,
  fr: messages_fr
};

<IntlProvider locale="en" messages={messages["en"]}>
  <App />
</IntlProvider>
```

* in each component

```tsx
import { useIntl } from "react-intl";
function MyComponent() {
  const intl = useIntl(); // Gets context from nearest IntlProvider
  return <span>{intl.formatMessage({ id: "greeting" })}</span>;
}
```


**Function**

```tsx
// App.tsx
export default function App(): JSX.Element { 
  // return JSX
  return <div>Hello, React!</div>;
}
```


### React-Scripts
* an NPM package that comes with Create React App (CRA), a popular tool for setting up React applications.

* Use `-D` to install.


* `react-scripts start`: Starts the development server with hot reloading.

* `react-scripts build`: Bundles the app for production optimizing performance.

* `react-scripts test`: Runs tests using Jest.

* `react-scripts eject`: Copies all build configurations into your project, giving full control but is irreversible.

> Internally runs  `webpack-dev-server`