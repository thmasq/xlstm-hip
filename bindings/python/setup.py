from pybind11.setup_helpers import Pybind11Extension, build_ext
from setuptools import setup

ext_modules = [
    Pybind11Extension(
        "xlstm_hip",
        ["src/xlstm_hip.cpp"],
        include_dirs=["../../include"],
        libraries=["xlstm"],
        library_dirs=["../../build"],
    ),
]

setup(
    name="xlstm-hip",
    ext_modules=ext_modules,
    cmdclass={"build_ext": build_ext},
    python_requires=">=3.7",
)
