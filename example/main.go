package main

import (
	"context"
	"flag"
	"log"

	"github.com/redis/go-redis/v9"
)

func main() {
	var (
		DragonFlyHost = flag.String("host", "localhost:6379", "dragonfly host")
	)

	flag.Parse()

	ctx := context.Background()

	rdb := redis.NewClient(&redis.Options{
		Addr:     *DragonFlyHost,
		Password: "", // no password set
		DB:       0,  // use default DB
	})

	err := rdb.Set(ctx, "key", "dragonfly rocks", 0).Err()
	if err != nil {
		panic(err)
	}

	val, err := rdb.Get(ctx, "key").Result()
	if err != nil {
		panic(err)
	}

	log.Println("key", val)
}
