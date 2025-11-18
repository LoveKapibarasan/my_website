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


```
module.exports = {
  mode: 'development',
  entry: `${__dirname}/src/main.js`,
  output: {
    path: `${__dirname}/public`,
    filename: 'bundle.js'
  },

  devServer: {
    // change here
  }
}
```