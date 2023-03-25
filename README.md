# :dragon: Dragonfly

Domesticate dragonfly for Snapp ODE. Setting up dragonfly with Docker, deploy on Kubernetes with a single Pod, deploy using
Charts. Testing dragonfly with a simple load testing application.

## What is Dragonfly?

```Dragonfly``` is a drop-in ```Redis``` replacement that scales vertically to support millions of 
operations per second and terabyte sized workloads, all on a single instance.
```Dragonfly``` gives you so much more with a complete, modern engine architecture that’s fully 
compatible with the Redis and Memcached APIs.

### start

```shell
docker run --network=host --ulimit memlock=-1 docker.dragonflydb.io/dragonflydb/dragonfly
```

## :books: Resources!

- [dragonflydb.io](https://dragonflydb.io/)
