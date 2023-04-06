#!/usr/bin/env bash

helm deps build charts
helm install dragonfly charts
