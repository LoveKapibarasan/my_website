
### AntDesign Form

**useForm<I>()**
```tsx
// Type definition
interface IFormData {
  name: string;
  email: string;
  age: number;
}

// Hook
function MyForm() {
  const { register, handleSubmit, formState: { errors } } = useForm<IFormData>({
    defaultValues: {
      name: '',
      email: '',
      age: 0
    }
  });

  const onSubmit = (data: IFormData) => {
    console.log(data);
  };

  return (
    <form onSubmit={handleSubmit(onSubmit)}>
      <input {...register('name', { required: true })} />
      <input {...register('email', { required: true })} />
      <input {...register('age', { required: true })} type="number" />
      <button type="submit"> Send </button>
    </form>
  );
}
```

```jsx
<Form layout="vertical">
  <Form.Item
    label="Name"
    name="name"
    rules={[
      { required: true, message: 'Please select location name' },
      { min: 3, message: 'At least three characters are required.' },
      { pattern: /^[a-zA-Z]+$/, message: 'Only Alphabett' }
    ]}
  >
    <Input placeholder="Enter location name" />
  </Form.Item>

  <Form.Item>
    <Button type="primary" htmlType="submit">send</Button>
  </Form.Item>
</Form>
```
**Watch Form**
```

  const [form] = Form.useForm(); //   const { form, formProps, query } = useForm<
  const watch = Form.useWatch('name', form);
  useEffect(() => {
  if (watch) {
  }
 }, [watch, form]);
  return (
    <Form form={form}>
      <Form.Item name="name" label="Name">
        <Input />
      </Form.Item>

```

VS useState
```tsx
const [name, setName] = useState('');

<Input 
  value={name}
  onChange={(e) => setName(e.target.value)}
/>
```


**Grid Layout**
```
<Row>
  <Col span={4}>25%</Col>
  <Col span={4}>25%</Col>
  <Col span={4}>25%</Col>
</Row>
```
```
┌─ Row ─────────────────────┐
│  ┌─ Col ────┬─ Col ────┐  │
│  │ span=6   │ span=6   │  │
│  └──────────┴──────────┘  │
└───────────────────────────┘
```


**Acordion**
```tsx
  const handleCountryChange = (value) => {
    form.setFieldValue('country', value);
  };
    <Select placeholder="Select a country" allowClear> /* Show cross(clear) button
      {Object.keys(Country).map((country) => (
        <Select.Option key={country} value={country}  onChange={handleCountryChange}>
          {country}
        </Select.Option>
      ))}
    </Select>
```
