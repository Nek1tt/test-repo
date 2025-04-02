#!/bin/sh

docker logs app > /usr/share/nginx/html/index.html 2>&1

nginx -g "daemon off;"