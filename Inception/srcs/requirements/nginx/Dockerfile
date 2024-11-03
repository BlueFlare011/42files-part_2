FROM alpine:3.20

RUN apk update && \
	apk add --no-cache nginx openssl

RUN openssl req -x509 -nodes -days 365 -newkey rsa:4096 -keyout nginx.key -out nginx.crt -subj "/C=/ST=/L=/O=/OU=/CN="

COPY conf/nginx.conf /etc/nginx/nginx.conf

COPY conf/nginx.crt /etc/nginx/certs
COPY conf/nginx.key /etc/nginx/certs

EXPOSE 443

CMD ["nginx", "-g", "daemon off;"]