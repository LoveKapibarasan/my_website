(async () => {
  try {
    const events = await fetch('./settings.json').then(r => {
      if (!r.ok) throw new Error(`HTTP ${r.status}`);
      return r.json();
    });

    // Use the standalone global constructor
    const ec = EventCalendar.create(document.getElementById('my-calendar'), {
      view: 'timeGridWeek',
      events: events,
      firstDay: 1,       // Monday
      slotDuration: '00:30'
    });
  } catch (err) {
    console.error('Error loading events:', err);
    document.getElementById('my-calendar').innerHTML =
      `<div class="alert alert-danger">Failed to load events.</div>`;
  }
})();
