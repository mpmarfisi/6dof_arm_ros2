from setuptools import find_packages
from setuptools import setup

setup(
    name='moveit_wrapper',
    version='0.0.0',
    packages=find_packages(
        include=('moveit_wrapper', 'moveit_wrapper.*')),
)
