
### CLI batch analysis

* **webContents.invoke() and ipcRenderer.handle() #25667**

* `src/background/window/ipc.ts` // Backend

* `src/renderer/ipc/api.ts` // API
* `src/renderer/ipc/setup.ts` // call batchAnalysis
* `src/renderer/ipc/preload.ts`  // call back function
* `src/renderer/ipc/web.ts` // For web

* `src/common/ipc/channel.ts` // Identifier
* `src/command/common/preload.ts`

* `src/common/ipc/process.ts` // GUI type defnition
* `src/background/proc/args.ts` // CLI parse

* `src/renderer/index.ts` // Entry Point

* `package.json` // allow command line arguments