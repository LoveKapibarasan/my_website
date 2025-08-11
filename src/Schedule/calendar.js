(function () {
  function taskToEvent(t) {
    return {
      id: t.id,
      title: t.title,
      start: t.start,
      end: t.end || null,
      color: t.completed ? '#22c55e' : undefined,
    };
  }

  function renderCalendar() {
    const el = document.getElementById('calendar');
    if (!el) return;

    if (window.App && window.App.calendar) {
      try { window.App.calendar.destroy(); } catch {}
    }

    const calendar = new FullCalendar.Calendar(el, {
      initialView: 'dayGridMonth',
      height: 'auto',
      events: (window.App?.tasks || []).map(taskToEvent),
      headerToolbar: {
        left: 'prev,next today',
        center: 'title',
        right: 'dayGridMonth,timeGridWeek,timeGridDay'
      },
      dateClick: (info) => {
        const start = new Date(info.date);
        start.setHours(new Date().getHours(), 0, 0, 0);
        const end = new Date(start);
        end.setHours(end.getHours() + 1);
        document.getElementById('task-start').value = toLocal(start);
        document.getElementById('task-end').value = toLocal(end);
        document.getElementById('task-title').focus();
        window.App?.setTimelineDay(start.toISOString().split('T')[0]);
      },
      eventClick: (info) => {
        const t = (window.App?.tasks || []).find(x => x.id === info.event.id);
        if (t && window.App) window.App.loadTaskToForm(t);
      },
    });

    calendar.render();
    if (window.App) window.App.calendar = calendar;
  }

  function pad(n) { return String(n).padStart(2, '0'); }
  function toLocal(d) {
    return (
      d.getFullYear() + '-' + pad(d.getMonth() + 1) + '-' + pad(d.getDate()) +
      'T' + pad(d.getHours()) + ':' + pad(d.getMinutes())
    );
  }

  window.CalendarLogic = { renderCalendar };
})();
