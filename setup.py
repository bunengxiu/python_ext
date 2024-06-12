from distutils.core import Extension
from distutils.core import setup

setup(
    name="demo",
    version="0.0.1",
    ext_modules=[
        Extension(
            "demo",
            sources=["src/python_ext.c"],
        ),
    ],
)