# from dragonfly base image
FROM docker.dragonflydb.io/dragonflydb/dragonfly:latest

# labels
LABEL app=dragonfly
LABEL env=snapp_ode
LABEL platform=docker
LABEL type=cache

MAINTAINER amirhossein.najafizadeh@snapp.cab

# keep container alive
ENTRYPOINT ["tail"]
CMD ["-f", "/dev/null"]
