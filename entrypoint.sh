#!/bin/sh

kubectl logs -l app=test-app -c test-app > /usr/share/nginx/html/index.html 2>&1

nginx -g "daemon off;"