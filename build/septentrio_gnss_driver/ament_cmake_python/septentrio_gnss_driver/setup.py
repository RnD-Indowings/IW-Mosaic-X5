from setuptools import find_packages
from setuptools import setup

setup(
    name='septentrio_gnss_driver',
    version='1.4.4',
    packages=find_packages(
        include=('septentrio_gnss_driver', 'septentrio_gnss_driver.*')),
)
