
# WARNING: Update also the version number in resources/device_models.json,
# otherwise the local copy will be overwritten each time Stellarium is started.
SET(TELESCOPE_CONTROL_MAJOR "0")
SET(TELESCOPE_CONTROL_MINOR "2")
SET(TELESCOPE_CONTROL_PATCH "4")
SET(TELESCOPE_CONTROL_VERSION "${TELESCOPE_CONTROL_MAJOR}.${TELESCOPE_CONTROL_MINOR}.${TELESCOPE_CONTROL_PATCH}")

IF(APPLE)
	SET(CMAKE_INSTALL_PREFIX $ENV{HOME}/Library/Application\ Support/Stellarium)
ElSE(APPLE)
	SET(CMAKE_INSTALL_PREFIX $ENV{HOME}/.stellarium)
ENDIF(APPLE)

#SET(TELESCOPE_SERVERS_SOURCE_DIR "$ENV{STELROOT}/../telescope_server/src"
#	CACHE PATH "Should point to the /src/ directory where the stellarium telescope servers source tree is located")

ADD_DEFINITIONS(-DTELESCOPE_CONTROL_VERSION="${TELESCOPE_CONTROL_VERSION}")

#Temporary debugging definitions for the telescope servers code
ADD_DEFINITIONS(-DDEBUG3 -DDEBUG4 -DDEBUG5)

ADD_SUBDIRECTORY( src )

INSTALL(FILES DESTINATION "modules/TelescopeControl")


