
```tsx
// Google Maps
<MapLocationPicker
  point={{ lat: 39.8283, lng: -98.5795 }}
  defaultCenter={{ lat: 39.8283, lng: -98.5795 }}
  zoom={3}
  onLocationSelect={(location) => {
    console.log('Selected Point:', location);
  }}
/>
```

**Zoom**
1 = the World
3 = Contnent
10 = City
