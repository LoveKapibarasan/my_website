# Webpack Dev Server



```json
{
  "name": "example-app",
  "version": "1.0.0",
  "scripts": {
    "start": "webpack serve --mode development",
    "build": "webpack --mode production"
  },
  "devDependencies": {
    "webpack": "^5.0.0",
    "webpack-cli": "^4.0.0",
    "webpack-dev-server": "^4.0.0"
  }
}
```

Module bandler


`webpack.config.js`

```js
module.exports = {
  mode: 'development',
  entry: `${__dirname}/src/main.js`,
  output: {
    path: `${__dirname}/public`, // use absolute path
    filename: 'bundle.js'
  },

  devServer: {
    // document root
    contentBase: path.join(__dirname, 'dist'), 
    host: "xxx.xxx.xxx.xxx",
  }
}
```

* `npx webpack-dev-server --open`: open web browser