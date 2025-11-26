# Alloy

* Originated from `Grafana Agent Flow`

* observability agent, Log Aggregator = ログ集約機

* collect log or metrics and send to Loki.

1. docker: 
  * [Offitial URL](https://grafana.com/docs/alloy/latest/set-up/install/docker/)
  * [Reference 1](https://tech.quickguard.jp/posts/grafana-alloy/)
2. Service

**Config**: `/etc/alloy/config.river`


```ini
// Alloy River configuration for forwarding Nginx logs to Loki
loki.source.file "remote_logs" {
  targets = [
    {
      __path__ = "/var/log/nginx/access.log",
      job      = "pays-dev-nginx-access",
      log_type = "access",
    },
    {
      __path__ = "/var/log/nginx/error.log",
      job      = "pays-dev-nginx-error",
      log_type = "error",
    },
  ]
  forward_to = [loki.write.default.receiver]
}

// Loki Output
loki.write "default" {
  endpoint {
    url = "https://loki.example.internal/loki/api/v1/push"  // Loki
    tenant_id = "tenant1"

    // TLS certification
    tls_config {
      insecure_skip_verify = false
      // ca_file = "/etc/ssl/certs/ca-certificates.crt"  // CA 
    }
  }
}
```


