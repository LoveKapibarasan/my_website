# Vue.js

for user interface

```js
<template>
  <div>{{ message }}</div>
</template>

<script>
export default {
  data() {
    return {
      message: 'Hello Vue!'
    }
  }
}
</script>

<style>
div {
  color: red;
}
</style>

```


## syntax
```vue

// parent
<!-- Full -->
<Child_component v-on:<event_name>="<handler>" />

<!-- shorthand -->
<Child_component @<event_name>="<handler>" />
//or
const handler = (data) => {
  // receieve <data> 
}


//child
emit("<event_name>", <data>); // send notification with data.
```
Send notification from child to parent.