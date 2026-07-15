from setuptools import find_packages
from setuptools import setup

setup(
    name='habitat_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('habitat_msgs', 'habitat_msgs.*')),
)
