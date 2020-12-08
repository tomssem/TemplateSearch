[![Test Status](https://github.com/tomssem/TemplateSearch/workflows/CI/badge.svg?branch=main)](https://github.com/tomssem/TemplateSearch/actions)

# TemplateSearch
Using C++ to automatically optimize sorting

## Dev environment
Create a docker container using:
`docker run --rm --name=TemplateSearch -it -v ~/.gitconfig:/etc/gitconfig -v $(pwd):/app -v ~/.ssh:/tmp/.ssh:ro tfwnicholson/cpp`
and hack away at the resulting command line at `/app`
To enter `Ctrl-D` out of there, and to restart run:
`docker start -ai TemplateSearch`
