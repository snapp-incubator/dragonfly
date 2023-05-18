# :dragon: Dragonfly

![](https://img.shields.io/badge/language-CPP-9cf?style=flat-square)
![](https://img.shields.io/github/v/release/amirhnajafiz/dragonfly?style=flat-square)
![](https://img.shields.io/badge/platform-OKD-important?style=flat-square)
![](https://img.shields.io/badge/runtime-Docker-blue?style=flat-square)
![](https://img.shields.io/badge/deploy-helm_charts-lightblue?style=flat-square)

Domesticate dragonfly for Snapp ODE. Setting up dragonfly with Docker, deploy on Kubernetes with a single Pod, deploy using
Charts. Testing dragonfly with a simple load testing application.

## What is Dragonfly?

```Dragonfly``` is a drop-in ```Redis``` replacement that scales vertically to support millions of 
operations per second and terabyte sized workloads, all on a single instance.
```Dragonfly``` gives you so much more with a complete, modern engine architecture that’s fully 
compatible with the Redis and Memcached APIs.

```shell
docker pull docker.dragonflydb.io/dragonflydb/dragonfly
```

### start

```shell
docker run --ulimit memlock=-1 -p 6379:6379 docker.dragonflydb.io/dragonflydb/dragonfly
```

Now you can use ```redis``` sdk to connect to ```dragonfly``` cluster.

```go
rdb := redis.NewClient(&redis.Options{
		Addr:     "localhost:6379",
		Password: "", // no password set
		DB:       0,  // use default DB
	})

err := rdb.Set(ctx, "key", "value", 0).Err()
if err != nil {
  panic(err)
}

val, err := rdb.Get(ctx, "key").Result()
if err != nil {
  panic(err)
}
fmt.Println("key", val)
```

## Charts

Dragonfly also provides helm charts in order to deploy an instance on kubernetes.

```shell
helm install dragonfly charts
```

## :books: Resources!

- [dragonflydb.io](https://dragonflydb.io/)

## TODO

- [ ] Add ```service account```
- [ ] Deploy on ```parham-testing``` namespace
- [ ] Implement a load test
- [ ] Benchmark of ```dragonfly```
