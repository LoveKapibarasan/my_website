# REST（Representational State Transfer）
the most common architectural style for designing Web APIs.

Example

## Create (CREATE) 
```http
POST /users
Body:
{
  "name": "Taro",
  "email": "taro@example.com"
}
```


### Swagger

1. SpringDoc

```xml
<dependency>
  <groupId>org.springdoc</groupId>
  <artifactId>springdoc-openapi-starter-webmvc-ui</artifactId>
  <version>2.1.0</version>
</dependency>
```

```java
@RestController
@RequestMapping("/api")
@Tag(name = "Example", description = "サンプル API")
public class ExampleController {

    @Operation(summary = "挨拶を返す")
    @GetMapping("/hello")
    public Map<String, String> hello(
            @Parameter(description = "名前", required = false)
            @RequestParam(required = false, defaultValue = "World") String name) {
        return Map.of("message", "Hello " + name);
    }
}
```

`application.properties / application.yml`
```
# OpenAPI JSON endpoint
springdoc.api-docs.path=/v3/api-docs

# Swagger UI path
springdoc.swagger-ui.path=/swagger-ui.html
```

2. Fastify
