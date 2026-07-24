from setuptools import find_packages, setup

package_name = 'habitat_driver'

setup(
    name=package_name,
    version='0.0.0',

    packages=find_packages(exclude=['test']),

    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],

    install_requires=['setuptools'],

    zip_safe=True,

    maintainer='Jose',
    maintainer_email='josef.toribio.dev@gmail.com',

    description='ROS 2 driver for habitat monitoring system',

    license='MIT',

    extras_require={
        'test': [
            'pytest',
        ],
    },

    entry_points={
        'console_scripts': [
            'sht41_node = habitat_driver.sht41_node:main','sub = habitat_driver.sub:main',
        ],
    },
)
