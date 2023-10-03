#!/bin/sh

function logCorrect() {
	START='\033[01;32m'
	END='\033[00;00m'
	MESSAGE=${@:-""}
	printf "${START}${MESSAGE}${END}"
}

function logError() {
	START='\033[01;31m'
	END='\033[00;00m'
	MESSAGE=${@:-""}
	printf "${START}${MESSAGE}${END}"
}

function logWarning() {
	START='\033[01;33m'
	END='\033[00;00m'
	MESSAGE=${@:-""}
	printf "${START}${MESSAGE}${END}"
}

function log() {
	MESSAGE=${@:-""}
	printf "${MESSAGE}"
}

function logHeader() {
	START='\033[01;35m'
	END='\033[00;00m'
	MESSAGE=${@:-""}
	printf "${START}${MESSAGE}${END}"
}
