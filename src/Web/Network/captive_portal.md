

1. From DNS or HTTP(not HTTPs) redirect login page

`Location:` -- Redirect header.
```bash
REDIRECT_URL=$(curl -sI http://neverssl.com | grep -i '^Location:' | cut -d' ' -f2)
echo "Redirected: $REDIRECT_URL"

curl -v "$REDIRECT_URL"
```