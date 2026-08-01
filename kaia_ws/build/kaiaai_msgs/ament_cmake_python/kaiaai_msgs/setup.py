from setuptools import find_packages
from setuptools import setup

setup(
    name='kaiaai_msgs',
    version='0.3.0',
    packages=find_packages(
        include=('kaiaai_msgs', 'kaiaai_msgs.*')),
)
