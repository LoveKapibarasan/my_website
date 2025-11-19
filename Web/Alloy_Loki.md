# Alloy

* observability agent.

* collect log or metrics and send to Loki.

Config: `/etc/alloy/config.river`


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
    {
      __path__ = "/var/log/aic-pay/pays_stderr.log",
      job      = "pays-dev-pay-stderr",
      log_type = "error",
     },
    {
      __path__ = "/var/log/aic-pay/pays_stdout.log",
      job      = "pays-dev-pay-stdout",
      log_type = "access",
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


# Loki

* Log storage and search engine.